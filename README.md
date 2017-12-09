#Input/Output
[main.cpp lines 20-26](/main.cpp#L20) 
[main.cpp lines 36-59](/main.cpp#L36)
[main.cpp lines 69-98](/main.cpp#L69)
[drinkmath.cpp line 105](/drinkmath.cpp#L125)
I used while and if loops to repeatedly get user input and give them outputs to match their option. This way certain menu screens will continually open up until the close option is selected, letting them continually add info.

##Control Flow
[main.cpp lines 29,42,62,78,95,102](/main.cpp#L29)
I used if,if-else, and else loops to divide up the different menu options.

###Iteration
[main.cpp lines 16,22,41,77](/main.cpp#L16)
I used iteration to continually loop certain menus. This way if user has innaporopiate input it will ask again, or it will keep asking if user needs to put more data in until finished.
[drinkmath.cpp lines 19,29,45,60-65,78-80,94-96,118,140](/drinkmath.cpp#L19)
I had to use a lot of for loops in order to get 7 user input to represent a week, to make a matrix to represent a month, and to iterate through and fill the matrix.

####Data Structure
[main.cpp lines 46-49,83-87](/main.cpp#L46)
I had to use vectors to get user input a certain amount of times, representing a week.
[drinkmath.cpp lines 8-108,138-142](/drinkmath.cpp#L8)
I had to use pretty much all vectors and matrices in this project for user input, user display, iterating through matrix, and as a constructor.

#####Function
[main.cpp lines 35,38-39,51-52,72-75,91-92](/main.cpp#L35)
[drinkmath.cpp lines 8-142](/drinkmath.cpp#L8)
[textfile.cpp lines 7,20,33](/textfile.cpp #L7)
I had to use functions on almost everything in this project and I probably used too many. The functions made it easy to do the same task, like my weeklyUpdate() function in my main.cpp/drinkmath.cpp files.

######File I/O
[textfile.cpp lines 20-27,33-39](/textfile.cpp#L20)
I had to use ifstream and ofstream in order to get user input and save it. I had a hard time getting it working but now it will hold a previous calendar.

#######Class
[drinkmath.h](/drinkmath.h #L1)
[textfile.h](/textfile.h#L1)
I used two classes for this project as i felt it was easier to keep organized and know where everything should be. It really helped seperating fstream from math.
