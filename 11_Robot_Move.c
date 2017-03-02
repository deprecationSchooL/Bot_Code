/*
(1) line follow to stay in collumn.
(2) light detector to identify edge of square.
(3) camera to identify color of square
(4) database summation "AND" used to find coordinate in sets of data.
(5) model checking approach.

(1) map: two locations, not determined by cros identity.

(1) line following and search methods correct for robot movement uncertainty.
*/
//global dataset for test environment.
int facing = 1;//actual facing
int sSquare[2] = {2,3}; //actual starting
int cSquare[3] = {0,0}; //current square
//actual board arrays
// 0=white, 1=green, 2=red, 3=purple, 4=Black
int color [8][10] = 
{{4,4,4,4,4,4,4,4,4,4},
{4,0,2,0,0,0,1,0,1,4},
{4,0,0,0,1,0,0,0,2,4},
{4,0,2,2,0,0,0,0,1,4},
{4,0,0,0,0,0,1,2,0,4},
{4,2,0,0,0,2,0,3,0,4},
{4,2,0,1,1,0,0,1,0,4},
{4,4,4,4,4,4,4,4,4,4}
};//end global artificial environment variables.

//function declarations
void FollowR(int squares); //# squares to cross
void PivotL( );//rotation encode number;
void PivotR( );
void Advance();
void Back();
void Align();

int GetColor();
void GetStart(int start[][[2]);
void Match(int square[][2]);


