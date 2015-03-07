template <typename TYPE>
TYPE TrouverMax(const TYPE _arrayElements[], const unsigned int _elementCount)
{
	if (_elementCount < 1) throw std::invalid_argument("Count of elements in array must be greater than 0.\n");
	TYPE max {};
	for (unsigned int i = 0; i < _elementCount; ++i)
	{
		if (_arrayElements[i] > max)
		{
			max = _arrayElements[i];
		}
	}
	return max;
}

template <typename TYPE>
TYPE CalculerSomme(const TYPE _arrayElements[], const unsigned int _elementCount)
{
	if (_elementCount < 1) throw std::invalid_argument("Count of elements in array must be greater than 0.\n");
	TYPE sum{};
	for (unsigned int i = 0; i < _elementCount; ++i)
	{
		sum += _arrayElements[i];
	}
	return sum;
}

template <typename TYPE>
unsigned int CompterElement(const TYPE _element, const TYPE _arrayElements[], const unsigned int _elementCount)
{
	if (_elementCount < 1) throw std::invalid_argument("Count of elements in array must be greater than 0.\n");
	unsigned int count = 0;
	for (unsigned int i = 0; i < _elementCount; ++i)
	{
		if (_arrayElements[i] == _element)
		{
			++count;
		}
	}
	return count;
}

//template <>
//string TrouverMax(const string _arrayElements[], const unsigned int _elementCount)
//{
//	if (_elementCount < 1) throw std::invalid_argument("Count of elements in array must be greater than 0.\n");
//	string largestString = "";
//	for (unsigned int i = 0; i < _elementCount; ++i)
//	{
//		if (_arrayElements[i].length() > largestString.length())
//		{
//			largestString = _arrayElements[i].length();
//		}
//	}
//	return largestString;
//}