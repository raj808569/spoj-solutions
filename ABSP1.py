for _ in xrange(input()):
	N = input()
	A = map(int, raw_input().split())
	s, x = 0, 0
	for i in xrange(1, N):
		x += (i*(A[i] - A[i-1]))
		s += x
	print s
