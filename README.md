<h2> Book Class </h2>
The Book class represents a book and provides methods for accessing and manipulating its properties. This class can be used to create book objects with the following attributes:

title: The title of the book (a string).
author: The author of the book (a string).
pageCount: The number of pages in the book (an integer).
digital: A boolean value indicating whether the book is digital or not.

<h3> Constructors </h3>
Book()
This is the default constructor for the Book class. It initializes the title, author, pageCount, and digital attributes to default values.

Book(const char* title, const char* author, int pageCount, bool digital)
This constructor creates a Book object with the specified title, author, pageCount, and digital values.

Book(const char* title, const char* author, int pageCount)
This constructor creates a Book object with the specified title, author, and pageCount values. The digital attribute is set to false by default.

<h3> Methods </h3>
<h5> void setTitle(const char* title)
This method sets the title of the book to the specified value.

  <h5> const char* getTitle() </h5>
This method returns the title of the book.

  <h5> void setAuthor(const char* author) </h5>
This method sets the author of the book to the specified value.

  <h5> const char* getAuthor()  </h5>
This method returns the author of the book.

  <h5> void setPageCount(int pageCount) </h5>
This method sets the pageCount of the book to the specified value.

  <h5> int getPageCount() </h5>
This method returns the pageCount of the book.

  <h5> void setDigital() </h5>
This method sets the digital attribute to true, indicating that the book is digital.

  <h5> bool isDigital() </h5>
This method returns true if the book is digital, and false otherwise.

Feel free to use this Book class in your projects to represent books and perform operations on them.
