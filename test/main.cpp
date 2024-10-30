#include <gtest/gtest.h>

#if defined(BUILD_MONOLITHIC)
#define main   ColorSpace_test_main
#endif

extern "C"
int main(int argc, const char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

