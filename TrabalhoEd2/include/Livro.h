#ifndef LIVRO_H
#define LIVRO_H
#include "Author.h"
#include "Category.h"
#include <string>

using namespace std;

class Livro
{
    public:
        Livro();
        virtual ~Livro();

    protected:

    private:
        string isbn10;
        string isbn13;
        string title;
        string edition;
        int rating_count;
        float rating_avg;
        int bookId;
        float bestsellers_rank;
        Author author;
        Category category;
};

#endif // LIVRO_H
