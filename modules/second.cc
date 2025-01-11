export module second;
import first;

export template <class Type>
auto second(bool nothing) -> Type;

// ---

template <class Type>
auto second(bool nothing) -> Type {
	if (nothing) {
		first<Type>(false);
	}
	return 0;
}
