/* This is a generated file, see Makefile.am for its inputs. */
static const char machine_strings[] = "armeb\0armv5tejl\0armv7l\0i386\0i486\0i586\0i686\0ia64\0ppc\0ppc64\0"
	"s390\0s390x\0x86_64";
static const unsigned machine_s2i_s[] = {
	0,6,16,23,28,33,38,43,48,52,
	58,63,69,
};
static const int machine_s2i_i[] = {
	8,8,8,0,0,0,0,2,4,3,
	6,5,1,
};
static int machine_s2i(const char *s, int *value) {
	size_t len, i;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISUPPER(c) ? c - 'A' + 'a' : c;
	}
	copy[i] = 0;
	return s2i__(machine_strings, machine_s2i_s, machine_s2i_i, 13, copy, value);
	}
}
static const unsigned machine_i2s_direct[] = {
	23,69,43,52,48,63,58,-1u,0,
};
static const char *machine_i2s(int v) {
	return i2s_direct__(machine_strings, machine_i2s_direct, 0, 8, v);
}
