def matrix_dot_vector(a: list[list[int|float]], b: list[int|float]) -> list[int|float]:
	# Return a list where each element is the dot product of a row of 'a' with 'b'.
	if (len(a)) != len(b):return -1

	final = []
	for row in a:
		suma = 0
		for el in range(len(row)):
			suma+=row[el]*b[el]
		final.append(suma)

	return final
