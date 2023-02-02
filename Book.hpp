#pragma once


class Book{
	private:
		const char* title;
		const char* author;
		int pageCount;
		bool digital;
	public:
		Book();
		Book(const char* title, const char* author, int pageCount, bool digital);
		Book(const char* title, const char* author, int pageCount);
		void setTitle( const char* title);
		const char* getTitle();
		void setAuthor(const char* author);
		const char* getAuthor();
		void setPageCount(int pageCount);
		int getPageCount();
		void setDigital();
		bool isDigital();
};
