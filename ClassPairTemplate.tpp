// Implement  ClassPairTemplate class constructor and print methods
template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 value1, T2 value2) {
	first = value1;
	second = value2;
}

template <typename T1, typename T2>
void Pair<T1, T2>::print() const {
	cout << first << " is paired with " << second << endl;
}
