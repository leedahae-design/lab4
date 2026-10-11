#pragma once
#include "book.h"
#include <iostream>

namespace leedahae2449069
{
    class bookStore
    {
        // private:
        book b;
        bool available;

    public:
        bookStore(book b0 = book{1,0}, bool a0 = false)
            : b{b0}, available{a0}{}

        // bookStore(int d = 1, int p = 0, bool a = false)
        //     : b{d,p}, available{a}{}

        void print() const //bookStore::print()
        {
            b.print(); //book::print() - id, price
            if (available) std::cout << " available\n";
            else std::cout << " NOT available\n";
        }

        const book& getBook() const { return b; }
        void setBook(const book& b0) { b = b0; }

        // -print: 표준스트림출력으로 멤버변수들 출력
        // -book형 객체의 접근함수를 참조형식으로 구현
    };
}
