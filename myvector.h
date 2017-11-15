// Douglas Atkinson
// November 6, 2017
// myvector.h

#ifndef _MYVECTOR_H_
#define _MYVECTOR_H_

template<class T>
class MyVector
{
public:
	using size_type = unsigned long;
	using iterator = T*;
	using const_iterator = const T*;

private:
	size_type size;
	size_type capacity;
	T* pElems;

public:
	// Constructors
	MyVector<T>();
	MyVector<T>(size_type capacity);
	MyVector<T>(size_type size, T val);

	MyVector<T>(const MyVector<T>& rhs);

	virtual ~MyVector<T>();

	// Overloaded operators
	MyVector<T>& operator=(const MyVector<T>& rhs);
	bool operator==(const MyVector<T>& rhs) const;
	bool operator!=(const MyVector<T>& rhs) const;
	T& operator[](const size_type index);
	MyVector<T> operator+(const MyVector<T>& rhs) const;
	MyVector<T> operator-(const MyVector<T>& rhs) const;

	// Getters
	size_type getSize() const
	{
		return size;
	}
	size_type getCapacity() const
	{
		return capacity;
	}

	// Methods
	T add(T elem);
	T remove();
	T& at(const size_type index);
	bool contains(T elem);
	bool isEmpty();

	// Iterator methods
	iterator begin() { return pElems; }
	const_iterator begin() const { return pElems; }
	iterator end() { return &pElems[size]; }
	const_iterator end() const { return &pElems[size]; }
};

#endif // !_MYVECTOR_H_

template<class T>
inline MyVector<T>::MyVector()
{
	size = 0;
	capacity = 0;
	pElems = nullptr;
}

template<class T>
inline MyVector<T>::MyVector(size_type capacity)
{
	if (capacity < 1)
		throw "Cannot create a vector less than capacity size 1";

	size = 0;
	this->capacity = capacity;
	pElems = new T[capacity];
}

template<class T>
inline MyVector<T>::MyVector(size_type size, T val)
	: MyVector<T>(size)
{
	this->size = size;
	for (size_type i = 0; i < size; i++)
		pElems[i] = val;
}

template<class T>
inline MyVector<T>::MyVector(const MyVector<T>& rhs)
	: MyVector<T>(rhs.capacity)
{
	this->size = rhs.size;
	for (size_type i = 0; i < size; i++)
		pElems[i] = rhs.pElems[i];
}

template<class T>
inline MyVector<T>::~MyVector()
{
	if (pElems)
		delete[] pElems;
}

template<class T>
inline MyVector<T>& MyVector<T>::operator=(const MyVector<T>& rhs)
{
	if (pElems)
		delete[] pElems;

	size = rhs.size;
	capacity = rhs.capacity;
	pElems = new T[capacity];
	for (size_type i = 0; i < size; i++)
		pElems[i] = rhs.pElems[i];

	return *this;
}

template<class T>
inline bool MyVector<T>::operator==(const MyVector<T>& rhs) const
{
	if (size != rhs.size)
		return false;

	for (size_type i = 0; i < size; i++)
	{
		if (pElems[i] != rhs.pElems[i])
			return false;
	}

	return true;
}

template<class T>
inline bool MyVector<T>::operator!=(const MyVector<T>& rhs) const
{
	return !(operator==(rhs));
}

template<class T>
inline T & MyVector<T>::operator[](const size_type index)
{
	if (size == 0)
		throw "Cannot subscript empty vector";

	if (index < 0 || index >= size)
		throw "Index out of range";

	return pElems[index];
}

template<class T>
inline MyVector<T> MyVector<T>::operator+(const MyVector<T>& rhs) const
{
	size_type maxSize, minSize;
	if (this->size > rhs.size)
	{
		maxSize = size;
		minSize = rhs.size;
	}
	else
	{
		maxSize = rhs.size;
		minSize = size;
	}
	MyVector<T> result(maxSize);
	for (size_type i = 0; i < minSize; i++)
	{
		result.add(pElems[i] + rhs.pElems[i]);
	}
	for (size_type i = minSize; i < maxSize; i++)
	{
		result.add((this->size > rhs.size) ? pElems[i] : rhs.pElems[i]);
	}
	return result;
}

template<class T>
inline MyVector<T> MyVector<T>::operator-(const MyVector<T>& rhs) const
{
	size_type maxSize, minSize;
	if (this->size > rhs.size)
	{
		maxSize = size;
		minSize = rhs.size;
	}
	else
	{
		maxSize = rhs.size;
		minSize = size;
	}
	MyVector<T> result(maxSize);
	for (size_type i = 0; i < minSize; i++)
	{
		result.add(pElems[i] - rhs.pElems[i]);
	}
	for (size_type i = minSize; i < maxSize; i++)
	{
		result.add((this->size > rhs.size) ? pElems[i] : -1 * rhs.pElems[i]);
	}

	return result;	
}

template<class T>
inline T MyVector<T>::add(T elem)
{
	if (capacity == 0)
	{
		if (pElems)
			delete[] pElems;
		capacity = 1;
		pElems = new T[capacity];
	}
	if (size < capacity)
	{
		pElems[size] = elem;
	}
	else
	{
		capacity *= 2;
		T* pNewElems = new T[capacity];
		for (size_type i = 0; i < size; i++)
		{
			pNewElems[i] = pElems[i];
		}
		delete[] pElems;
		pElems = pNewElems;
		pElems[size] = elem;
	}
	size++;
	return elem;
}

template<class T>
inline T MyVector<T>::remove()
{
	if (size == 0)
		throw "Cannot remove element from empty container";

	T elem = pElems[size - 1];
	size--;
	return elem;
}

template<class T>
inline T & MyVector<T>::at(const size_type index)
{
	return operator[](index);
}

template<class T>
inline bool MyVector<T>::contains(T elem)
{
	for (size_type i = 0; i < size; i++)
	{
		if (pElems[i] == elem)
			return true;
	}
	return false;
}

template<class T>
inline bool MyVector<T>::isEmpty()
{
	return size == 0;
}

