template <typename t>
void iter(t *array, int len, void(*f)(const t&))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}
