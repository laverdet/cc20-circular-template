export module first;
import second;

export template <class Type>
auto first(bool nothing) -> Type;

// ---

template <class Type>
auto first(bool nothing) -> Type {
	if (nothing) {
		second<Type>(false);
	}
	return 0;
}
