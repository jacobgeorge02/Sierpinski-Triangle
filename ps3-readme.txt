/**********************************************************************
 *  ps3-readme 
 *  Recursive Graphics (Triangle Fractal)                       
 **********************************************************************/

Your name: Jacob George

Hours to complete assignment: 10 Hours

/**********************************************************************
 *  Briefly discuss the assignment itself and what you accomplished.
 **********************************************************************/
I created Sierpinski's triangle by first creating a base triangle object, then recursively calls fTree to create more smaller triangles around the base.


 /**********************************************************************
 *  Discuss one or more key algorithms, data structures, or 
 *  OO designs that were central to the assignment.
 **********************************************************************/
 I implemented a vector that was full of triangle objects. This was done so I can keep track of what
 triangle needed to be drawn. When a triangle gets created in fTree, I push_back said object into the vector.

/**********************************************************************
 *  Briefly explain the workings of the features you implemented.
 *  Include code excerpts.
 **********************************************************************/
    if (dep > 0) {
    Triangle base(len, x, y);
    TV.push_back(base);

    fTree(len / 2, dep-1, x, y + (len * (sqrt(3) / 2)), TV);
    fTree(len / 2, dep-1, x + len, y, TV);
    fTree(len / 2, dep-1, x - (len / 4), y - (len * (sqrt(3) / 4)), TV);
    }

 In fTree, after making sure the depth is not zero (base case), it will create a triangle object which gets pushed into the vector.
 It will then call fTree, reducing the the length in half to make smaller triangles.
 The x and y will get new positions calculated that are based on the calulcations from the Triangle consturctor 
 when initializing the x-cordinates and y-cordinates.

 /**********************************************************************
 *  Briefly explain what you learned in the assignment.
 **********************************************************************/
  I understood the use of how to create new objects by using recursion and also how to use a vector to keep track of specific objects I wanted to use.

/**********************************************************************
 *  List whatever help (if any) you received from the instructor,
 *  classmates, or anyone else.
 **********************************************************************/
 Professor Daly's Office Hours: Professor Daly helped me understand how my fTree should work
 Dr. Daly's Class Discord
 Tutors: Ben F - Explained to me how I should properly scale my window based on the triangle that I created

 https://en.wikipedia.org/wiki/Sierpi%C5%84ski_triangle
 Helped me understand what a Sierpinski triangle is and how to calculate the smaller sides

/**********************************************************************
 *  Describe any serious problems you encountered.  
 *  If you didn't complete any part of any assignment, 
 *  the things that you didn't do, or didn't get working.                  
 **********************************************************************/
 The triangle may not be properly centered to the middle of the window based on some lengths given by the user. But the user can input any amount of depth. 

/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/
 how to compile:
 make
 ./TFractal 250 6
 make clean
 you can use any L and any N when running ./TFractal
