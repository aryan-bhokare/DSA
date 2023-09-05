int mod_inv(int a, int m) {
	int g = m, r = a, x = 0, y = 1;
	while (r != 0) {
		int q = g / r;
		g %= r; swap(g, r);
		x -= q * y; swap(x, y);
	}
	return x < 0 ? x + m : x;
}
