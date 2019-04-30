#ifndef _image
#define _image
#include <iostream>
#include <memory>
#include <string>


namespace NGLLEL001{
    class image
    {
    private:
        int width,height;
        std::string file1,file2, outputFile;
        std::unique_ptr<unsigned char[]> data;
        friend class iterator;
    public:
        image();
        image(std::string OutPutFile ,int x = 0,int y = 0);
        image(const image& rhs);
        image(image&& rhs);
        image& operator=(const image& rhs);
        image& operator=(image&& rhs);
        void load(std::string filename);
        void save();
        ~image();
        
        class iterator
        {
        private:
            unsigned char * ptr;
        public:
            iterator(u_char *ptr);
            iterator(const iterator& rhs);
            iterator(iterator&& rhs);
            iterator& operator=(const iterator& rhs);
            iterator& operator=(iterator&& rhs);
            unsigned char* operator++();
            unsigned char* operator--();
            unsigned char* operator*(int d);
            ~iterator();
        };
        iterator begin();
        iterator end();
    };
}

#endif