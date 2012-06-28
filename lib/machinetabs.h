/* This is a generated file, see Makefile.am for its inputs. */
static const char machine_strings[] = "i386\0i486\0i586\0i686\0ia64\0ppc\0ppc64\0s390\0s390x\0x86_64";
static const unsigned machine_s2i_s[] = {
	0,5,10,15,20,25,29,35,40,46,
};
static const int machine_s2i_i[] = {
	0,0,0,0,2,4,3,6,5,1,
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
	return s2i__(machine_strings, machine_s2i_s, machine_s2i_i, 10, copy, value);
	}
}
static const unsigned machine_i2s_direct[] = {
	0,46,20,29,25,40,35,
};
static const char *machine_i2s(int v) {
	return i2s_direct__(machine_strings, machine_i2s_direct, 0, 6, v);
}
