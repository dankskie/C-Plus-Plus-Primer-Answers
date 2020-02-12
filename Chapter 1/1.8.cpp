	std::cout << "/*";                //Legal, the comment opening is treated as a string literal.
  std::cout << "*/";                //Legal, the comment closing is treated as a string literal.
  std::cout << /* "*/" */;          //Illegal, a " is opened but never closed, because the first one is commented out.
  std::cout << /* "*/" /* "/*" */;  //Legal, the middle /* is a string and the before and after bits are commented out.
