#ifndef CATEGORY_H
#define CATEGORY_H
#include <string>

using namespace std;


class Category
{
    public:
        Category();
        virtual ~Category();

    protected:

    private:
        string categoryName;
        int categoryId;
};

#endif // CATEGORY_H
