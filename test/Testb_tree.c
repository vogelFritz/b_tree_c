#include "b_tree.h"
#include "unity.h"

void test_b_tree_init()
{
    b_tree_t* b_tree;
    int max_degree;
    b_tree_init(b_tree, 3);
    max_degree = b_tree_get_max_degree(*b_tree);
    TEST_ASSERT_EQUAL(max_degree, 3);
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_b_tree_init);

    UNITY_END();

    return 0;
}
