#ifndef AUTHOR_H
#define AUTHOR_H
#include <string>

using namespace std;


class Author
{
    public:
        Author();
        virtual ~Author();

    protected:

    private:
        string authorName;
        int authorId;


};

#endif // AUTHOR_H
