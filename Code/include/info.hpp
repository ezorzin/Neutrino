/// @file

#ifndef info_hpp
#define info_hpp

  //////////////////////////////////////////////////////////////////////////
  //////////////////////// Standard C header files /////////////////////////
  //////////////////////////////////////////////////////////////////////////
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <math.h>
  #include <errno.h>

  ////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////// "INFO" CLASS ////////////////////////////////
  ////////////////////////////////////////////////////////////////////////////////
  class info
  {
    private:

    public:
      char*   value;                                                            // Value array.
      size_t  size;                                                             // Value array size.

              info(size_t loc_size);
              ~info();
  };

#endif
