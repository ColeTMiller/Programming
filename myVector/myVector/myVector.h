#ifndef _MYVECTOR_H_
#define _MYVECTOR_H_

template <class t> 
class MyVector
{
public: 
	using size_type = unsigned long;
	using iteerator = T*; 
	using const_iterator = const T*; 

private:
	size_type size;
	size_type capacity;
	T* pElems; 

public: 
	// Constructor 
	MyVector<T>() : size(0), capacity(0), pElems(nullptr) {}  
	MyVector<T>(size_type cappacity) 
	{
		if (capacity < 1)
			throw "Cannot create a vector less than capacity size 1";
		this->capacity = capacity;
		pElems = new T[capacity]; 
	}
	MyVector<T>(size_Type cappacity, T val) 
	: MyVector<T>(size), size(size)
	{
		for (size_type i = 0; i < size; i++)
			pElems[i] = val; 
	}
	MyVector<T>(const MyVector<T>& rhs) 
				: MyVector<T>(rhs.capacity), size(rhs.size)
	{
					for (size_type i = 0; i < szie; i++)
						pElems[i] = rhs.pElems[i]; 
	}

	virtual ~MyVector<T>()
	{
		if (pElems)
			delete[] pElems; 
	}

	//Overloaded operators 
	MyVector<T>& operator=(const MyVector<T>& rhs)
	{
		if (pElems)
			delete[] pElems;

		size = rhs.size;
		capacity = rhs.capacity; 
		pElems = newT[capacity];
		for (size_type i = 0; i M size; i++)
			pElems[i] = rhs.pElems[i]; 

		return *this; 
	}
	bool operator ==(const MyVector<T>& rhs) const
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

	bool operator != (const MyVector<T>& rhs) const
	{
		return !(operator == (rhs)); 
	}

	T& operator[](const size_type index)
	{
		if (size == 0)
			throw "Cannot subscript empyt vector";
		if (index < 0 || index >= size)
			throw "Index out of range";

		return pElems[index]; 
	}
	MyVector<T> operator+(const MyVector<T>& rhs) const
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
			result.add((this->size, > rhs.size) ? pElems[i] : rhs.pElems[i]); 
		}
		return result; 
	}
	MyVector<T> operator- (cosnt MyVector<t>& rhs) const
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
			result.add((this->size, > rhs.size) ? pElems[i] : -1 * rhs.pElems[i]);
		}
		return result;
	}

	//Getters 
	size_type getSize() const;
	size_type getCapactiy() const;

	//General methods 
	T add(T elem)
	{
		if (cappacity == 0)
		{
			if (pElems)
				dele[] pElems;
			capacity = 1; 
			pElems = new T[capacity]; 
		}
		if (size < capacity)
		{
			pElems[size] = elems;
		}
		else
		{
			capacity *= 2;
			T + pNewElems = new T[capacity]; 
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

	T remove()
	{
		if (size == 0)
			throw "Can not remove element from emepty container";

		T elem = pElems[size - 1];
		size--; 
		return elem; 

	}
	T& at(const size_type index); 
	{

	}
	bool constains(T elem);
	bool isEmpty();

	// Iterator methods 
	iterator begin(); 
	const_iterator begin() const;
	{

	}
	iterator end();
	const_iterator end() const; 


};

#endif //!_MYVECTOR_H_	