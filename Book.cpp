#include "Book.hpp"
#include <iostream>

using namespace std;

Book::Book(){ 
	this->title = "";
	this->author = "";
	this->pageCount = 0;
	this->digital = 0;
}


Book::Book(const char* title, const char* author, int pageCount, bool digital = 0){
	this->title = title;
	this->author = author;
	this->pageCount = pageCount;
	this->digital = digital;
}

Book::Book(const char* title, const char* author, int pageCount){
	this->title = title;
	this->author = author;
	this->pageCount = pageCount;
}

void Book::setTitle(const char* title){
	this->title = title;
}

const char* Book::getTitle(){
	return title;
}

void Book::setAuthor(const char* author){
	this->author = author;
}

const char* Book::getAuthor(){
	return author;
}

void Book::setPageCount(int pageCount){
	while (pageCount < 0){
		cout << "Books cannot have a negative number \nof pages, enter a new number: ";
		cin >> pageCount;
	}
	this->pageCount = pageCount;
}

int Book::getPageCount(){
	return pageCount;
}

void Book::setDigital(){
	this->digital = true;
}

bool Book::isDigital(){
	return digital;
}	
	
