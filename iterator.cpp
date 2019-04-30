#include "image.h"

NGLLEL001::image::iterator::iterator(u_char *p):ptr(p){

}

NGLLEL001::image::iterator::iterator(const NGLLEL001::image::iterator& p):ptr(p.ptr){
   
}

NGLLEL001::image::iterator::iterator(NGLLEL001::image::iterator&& p):ptr(p.ptr){
   p.ptr = nullptr;
}
NGLLEL001::image::iterator& NGLLEL001::image::iterator::operator=(const NGLLEL001::image::iterator& rhs){
    ptr = rhs.ptr;
    return *this;
}

NGLLEL001::image::iterator& NGLLEL001::image::iterator::operator=(NGLLEL001::image::iterator&& rhs){
    ptr = rhs.ptr;
    rhs.ptr = nullptr;
    return *this;
}

NGLLEL001::image::iterator::~iterator(){
    if(ptr != nullptr){
        delete ptr;
    }
}

unsigned char* NGLLEL001::image::iterator::operator++(){
    ptr++;
}

unsigned char* NGLLEL001::image::iterator::operator--(){
    ptr--;
}

NGLLEL001::image::iterator NGLLEL001::image::begin(){
    return NGLLEL001::image::iterator(data.get());
}
/*
NGLLEL001::image::iterator NGLLEL001::image::end(){
    return NGLLEL001::image::iterator::iterator(data.get());
}*/