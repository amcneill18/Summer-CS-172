//variables used to define what symbol to use in different cases
const int ADD = 1, SUB = 2, MULT = 3, INT_DIV = 4, DIV = 5, MOD = 6;

//used to display the subject symbol
void subjectType(int n1, int n2, int subject);

//displays the menu
void Menu();

//displays the opening title
void Title();

//quick function to clear the screen after each problem
void clearScreen();

//Another function to display the correct subject character
char subjectChar(int subject);

//random integer generator is used multiple times
//1) To make numbers to use for problems
//2) To mix up the problem subject when selecting an option that includes multiple subjects
int randIntGenerator(int Min, int Max);

//When the user selects an option in the menu that only includes one subject, this function is used
double singleSubject(int operation);

//When the user selects an option in the menu that includes multiple subjects, this function is used
double multipleSubjects(int numOfQuestions, int nbOfOperations, int operation = ADD);