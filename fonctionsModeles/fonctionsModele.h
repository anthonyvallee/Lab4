#pragma once

#include <iostream>
#include <string>

using namespace std;

template <typename TYPE>
TYPE TrouverMax(const TYPE _arrayElements[], const unsigned int _elementCount);

template <typename TYPE>
TYPE CalculerSomme(const TYPE _arrayElements[], const unsigned int _elementCount);

template <typename TYPE>
unsigned int CompterElement(const TYPE _element, const TYPE _arrayElements[], const unsigned int _elementCount);

//template <>
//inline string TrouverMax(const string _arrayElements[], const unsigned int _elementCount);

#include "fonctionsModele.hpp"