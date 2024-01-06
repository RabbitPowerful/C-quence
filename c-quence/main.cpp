#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <string.h>

#define MAX_QUESTIONS 10
#define MAX_QUESTION_LENGTH 200
#define MAX_OPTIONS 4

void opening();
void theorybackground();
void loading();
void chapter_1_theory();
void chapter_2_theory();
void chapter_3_theory();
void chapter_4_theory();
void chapter_5_theory();
void chapter_6_theory();
void chapter_7_theory();
void topic(char *sentence);
void displaypara(char *paragraph);
void read_file(char *filename);
void newscreen();
void questions();
void feedback(int score);

struct Question 
{
    char question[MAX_QUESTION_LENGTH];
    char options[MAX_OPTIONS][MAX_QUESTION_LENGTH];
    int correct_option;
};

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"");
    int newWidth = 1370;
    int newHeight = 800;
    initwindow(newWidth, newHeight, "c-quence");

	opening();
	getch();
	cleardevice();
	loading();
	cleardevice();	
	chapter_1_theory();
	cleardevice();
	questions();
	cleardevice();
	loading();
	cleardevice();
	read_file("Variables.txt");
    cleardevice();
    
    chapter_2_theory();
	cleardevice();
	questions();
	cleardevice();
	loading();
	cleardevice();
	read_file("Input_Output.txt");
    cleardevice();
    
    chapter_3_theory();
	cleardevice();
	questions();
	cleardevice();
	loading();
	cleardevice();
	read_file("Control_statements.txt");
    cleardevice();
    
    chapter_4_theory();
	cleardevice();
	questions();
	cleardevice();
	loading();
	cleardevice();
	read_file("Function.txt");
    cleardevice();
    
    chapter_5_theory();
	cleardevice();
	questions();
	cleardevice();
	loading();
	cleardevice();
	read_file("Array.txt");
    cleardevice();

	chapter_6_theory();
	cleardevice();
	questions();
	cleardevice();
	loading();
	cleardevice();
	read_file("Structure.txt");
    cleardevice();
    
    chapter_7_theory();
	cleardevice();
	questions();
	cleardevice();
	loading();
	cleardevice();
	read_file("Data_Files.txt");
    cleardevice();

    getch();
    closegraph();
    return 0;
}

void opening()
{
    int newWidth = 1370;
    int newHeight = 800;
    int ydiff = 100;
    int i, j;
    int title[] = {'c', '-', 'q', 'u', 'e', 'n', 'c', 'e', '\0'};

    // OUTER
    //  TOP LEFT

    line(100, 300, 250, 150);
    line(250, 150, 500, 150);

    line(100, 300, 115, 300);
    line(115, 300, 215, 200);
    line(215, 200, 200, 200);

    line(300, 150, 310, 160);
    line(310, 160, 450, 160);
    line(450, 160, 460, 150);

    // BOTTOM LEFT
    line(250, newHeight - ydiff - 150, 500, newHeight - ydiff - 150);
    line(100, newHeight - ydiff - 300, 250, newHeight - ydiff - 150);

    line(100, newHeight - ydiff - 300, 115, newHeight - ydiff - 300);
    line(115, newHeight - ydiff - 300, 215, newHeight - ydiff - 200);
    line(215, newHeight - ydiff - 200, 200, newHeight - ydiff - 200);

    line(300, newHeight - ydiff - 150, 310, newHeight - ydiff - 160);
    line(310, newHeight - ydiff - 160, 450, newHeight - ydiff - 160);
    line(450, newHeight - ydiff - 160, 460, newHeight - ydiff - 150);

    // TOP RIGHT
    line(newWidth - 100, 300, newWidth - 250, 150);
    line(newWidth - 250, 150, newWidth - 500, 150);

    line(newWidth - 115, 300, newWidth - 215, 200);
    line(newWidth - 215, 200, newWidth - 200, 200);
    line(newWidth - 115, 300, newWidth - 100, 300);

    line(newWidth - 300, 150, newWidth - 310, 160);
    line(newWidth - 310, 160, newWidth - 450, 160);
    line(newWidth - 450, 160, newWidth - 460, 150);

    // BOTTOM RIGHT
    line(newWidth - 100, newHeight - ydiff - 300, newWidth - 250, newHeight - ydiff - 150);
    line(newWidth - 250, newHeight - ydiff - 150, newWidth - 500, newHeight - ydiff - 150);

    line(newWidth - 115, newHeight - ydiff - 300, newWidth - 215, newHeight - ydiff - 200);
    line(newWidth - 215, newHeight - ydiff - 200, newWidth - 200, newHeight - ydiff - 200);
    line(newWidth - 115, newHeight - ydiff - 300, newWidth - 100, newHeight - ydiff - 300);

    line(newWidth - 300, newHeight - ydiff - 150, newWidth - 310, newHeight - ydiff - 160);
    line(newWidth - 310, newHeight - ydiff - 160, newWidth - 450, newHeight - ydiff - 160);
    line(newWidth - 450, newHeight - ydiff - 160, newWidth - 460, newHeight - ydiff - 150);

    // INNER
    // INNER TOP RIGHT
    line(newWidth - 175, 300, newWidth - 275, 200);
    line(newWidth - 275, 200, newWidth - 325, 200);
    line(newWidth - 350, 160, newWidth - 350, 215);
    line(newWidth - 375, 200, newWidth - 425, 200);
    line(newWidth - 375, 215, newWidth - 500, 215);
    line(newWidth - 500, 215, newWidth - 530, 245);
    line(newWidth - 530, 245, newWidth - 675, 245);

    line(newWidth - 275, 215, newWidth - 325, 215);
    line(newWidth - 325, 215, newWidth - 325, 275);
    line(newWidth - 325, 275, newWidth - 215, 275);
    line(newWidth - 215, 275, newWidth - 275, 215);

    // INNER TOP LEFT
    line(175, 300, 275, 200);
    line(275, 200, 325, 200);
    line(350, 160, 350, 215);
    line(375, 200, 425, 200);
    line(375, 215, 500, 215);
    line(500, 215, 530, 245);
    line(530, 245, 675, 245);

    line(275, 215, 325, 215);
    line(325, 215, 325, 275);
    line(325, 275, 215, 275);
    line(215, 275, 275, 215);

    // INNER BOTTOM LEFT
    line(175, newHeight - ydiff - 300, 275, newHeight - ydiff - 200);
    line(275, newHeight - ydiff - 200, 325, newHeight - ydiff - 200);
    line(350, newHeight - ydiff - 160, 350, newHeight - ydiff - 215);
    line(375, newHeight - ydiff - 200, 425, newHeight - ydiff - 200);
    line(375, newHeight - ydiff - 215, 500, newHeight - ydiff - 215);
    line(500, newHeight - ydiff - 215, 530, newHeight - ydiff - 245);
    line(530, newHeight - ydiff - 245, 675, newHeight - ydiff - 245);

    // INNER BOTTOM RIGHT
    line(newWidth - 175, newHeight - ydiff - 300, newWidth - 275, newHeight - ydiff - 200);
    line(newWidth - 275, newHeight - ydiff - 200, newWidth - 325, newHeight - ydiff - 200);
    line(newWidth - 350, newHeight - ydiff - 160, newWidth - 350, newHeight - ydiff - 215);
    line(newWidth - 375, newHeight - ydiff - 200, newWidth - 425, newHeight - ydiff - 200);
    line(newWidth - 375, newHeight - ydiff - 215, newWidth - 500, newHeight - ydiff - 215);
    line(newWidth - 500, newHeight - ydiff - 215, newWidth - 530, newHeight - ydiff - 245);
    line(newWidth - 530, newHeight - ydiff - 245, newWidth - 675, newHeight - ydiff - 245);

    // COLOURING
    // TOP RIGHT
    int topleft1[] = {100, 300, 115, 300, 215, 200, 200, 200};
    int topleft2[] = {300, 150, 310, 160, 450, 160, 460, 150};
    int bottomleft1[] = {100, newHeight - ydiff - 300, 115, newHeight - ydiff - 300, 215, newHeight - ydiff - 200, 200, newHeight - ydiff - 200};
    int bottomleft2[] = {300, newHeight - ydiff - 150, 310, newHeight - ydiff - 160, 450, newHeight - ydiff - 160, 460, newHeight - ydiff - 150};
    int topright1[] = {newWidth - 115, 300, newWidth - 215, 200, newWidth - 200, 200, newWidth - 100, 300};
    int topright2[] = {newWidth - 300, 150, newWidth - 310, 160, newWidth - 450, 160, newWidth - 460, 150};
    int bottomright1[] = {newWidth - 115, newHeight - ydiff - 300, newWidth - 215, newHeight - ydiff - 200, newWidth - 200, newHeight - ydiff - 200, newWidth - 100, newHeight - ydiff - 300};
    int bottomright2[] = {newWidth - 300, newHeight - ydiff - 150, newWidth - 310, newHeight - ydiff - 160, newWidth - 450, newHeight - ydiff - 160, newWidth - 460, newHeight - ydiff - 150};
    int shape1[] = {275, 215, 325, 215, 325, 275, 215, 275, 275, 215};
    int shape2[] = {newWidth - 275, 215, newWidth - 325, 215, newWidth - 325, 275, newWidth - 215, 275, newWidth - 275, 215};

    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, topleft2);
    fillpoly(4, topleft1);
    fillpoly(4, bottomleft1);
    fillpoly(4, bottomleft2);
    fillpoly(4, topright1);
    fillpoly(4, topright2);
    fillpoly(4, bottomright1);
    fillpoly(4, bottomright2);

    settextstyle(BOLD_FONT, HORIZ_DIR, 9);
    char seq[8][20] = {"c", "c-", "c-q", "c-qu", "c-que", "c-quen", "c-quenc", "c-quence"};
    for (i = 0; i < 8; i++)
    {
        j = 0;
        while (seq[i][j] != '\0')
        {
            outtextxy(450, 300, seq[i]);
            j++;
        }
        delay(500);
    }
    delay(500);
    setfillstyle(LINE_FILL, YELLOW);
    fillpoly(4, shape1);
    fillpoly(4, shape2);
    delay(900);

    settextstyle(BOLD_FONT, HORIZ_DIR, 5);
    outtextxy(540, 500, "Press Enter!");
}

void theorybackground()
{

    int newWidth = 1370;
    int newHeight = 800;
    int ydiff = 50;
    int shift = 55;
    int xshift = 35;
    int yshift = 35;
    int nshift = 26;
    int i;
    int j = 70;
    int k = 0;

    setcolor(YELLOW);
    // MAIN LOOP
    line(300, 50, 1200, 50);
    line(1200, 50, 1250, 100);
    line(1250, 100, 1250, 500);
    line(1250, 500, 1200, 550);
    line(1200, 550, 1200, 700);
    line(1200, 700, 800, 700);
    line(800, 700, 750, 650);
    line(750, 650, 550, 650);
    line(550, 650, 500, 700);
    line(500, 700, 400, 700);
    line(400, 700, 385, 715);
    line(385, 715, 100, 715);
    line(100, 715, 100, 200);
    line(100, 200, 300, 50);
    setcolor(WHITE);
    line(100, 190, 290, 50);
    line(290, 50, 100, 50);
    line(100, 50, 100, 190);

    // EXTRA LINES TOP
    line(300, 60, 350, 60);
    line(350, 60, 350, 65);
    line(350, 65, 300, 65);
    line(300, 65, 300, 60);

    line(300 + shift, 60, 350 + shift, 60);
    line(350 + shift, 60, 350 + shift, 65);
    line(350 + shift, 65, 300 + shift, 65);
    line(300 + shift, 65, 300 + shift, 60);

    line(300 + 2 * shift, 60, 350 + 2 * shift, 60);
    line(350 + 2 * shift, 60, 350 + 2 * shift, 65);
    line(350 + 2 * shift, 65, 300 + 2 * shift, 65);
    line(300 + 2 * shift, 65, 300 + 2 * shift, 60);

    // EXTRA SQUARES BOTTOM
    line(115, 700, 140, 700);
    line(140, 700, 140, 675);
    line(140, 675, 115, 675);
    line(115, 675, 115, 700);

    line(xshift + 115, 700, xshift + 140, 700);
    line(xshift + 140, 700, xshift + 140, 675);
    line(xshift + 140, 675, xshift + 115, 675);
    line(xshift + 115, 675, xshift + 115, 700);

    line(115, 700 - yshift, 140, 700 - yshift);
    line(140, 700 - yshift, 140, 675 - yshift);
    line(140, 675 - yshift, 115, 675 - yshift);
    line(115, 675 - yshift, 115, 700 - yshift);

    // BOTTOM SHAPE
    line(500, 650, 540, 650);
    line(540, 650, 500, 690);
    line(500, 690, 410, 690);
    line(410, 690, 435, 665);
    line(435, 665, 485, 665);
    line(485, 665, 500, 650);

    // BOTTOM LINES
    line(420, 690, 175, 690);

    line(125, 640, 125, 400);
    line(125, 400, 100, 355);

    // BOTTOM SHAPES
    line(750, 655, 795, 700);
    line(795, 700, 725, 700);
    line(725, 700, 725, 655);
    line(725, 655, 750, 655);

    for (i = 0; i < 6; i++)
    {
        line(720 - i * nshift, 700, 720 - i * nshift, 655);
        line(720 - i * nshift, 655, 710 - i * nshift, 655);
        line(710 - i * nshift, 655, 710 - i * nshift, 700);
        line(710 - i * nshift, 700, 720 - i * nshift, 700);
    }

    line(newWidth - j - 750, 655, newWidth - j - 795, 700);
    line(newWidth - j - 795, 700, newWidth - j - 725, 700);
    line(newWidth - j - 725, 700, newWidth - j - 725, 655);
    line(newWidth - j - 725, 655, newWidth - j - 750, 655);

    // LINE EXTENSIONS RIGHT
    line(1250, 300, 1275, 325);
    line(1275, 325, 1275, 450);
    line(1275, 450, 1250, 475);

    setcolor(WHITE);
    line(1260, 465, 1260, 600);
    line(1260, 600, 1200, 660);

    // LINE EXTENSIONS TOP
    line(1125, 50, 1100, 25);
    line(1100, 25, 900, 25);
    line(900, 25, 875, 50);

    setcolor(WHITE);
    line(890, 35, 400, 35);
    line(400, 35, 385, 50);

    // LINE EXTENSIONS LEFT
    line(100, 700, 75, 675);
    line(75, 675, 75, 500);
    line(75, 500, 100, 475);

    // COlOURING
    // OUTER TRIANGLE
    int outertriangle[] = {100, 50, 290, 50, 100, 190};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(3, outertriangle);

    // EXTRA SQUARES BOTTOM
    int sq1[] = {115, 700, 140, 700, 140, 675, 115, 675, 115, 700};
    int sq2[] = {xshift + 115, 700, xshift + 140, 700, xshift + 140, 675, xshift + 115, 675, xshift + 115, 700};
    int sq3[] = {115, 700 - yshift, 140, 700 - yshift, 140, 675 - yshift, 115, 675 - yshift, 115, 700 - yshift};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, sq1);
    fillpoly(4, sq2);
    fillpoly(4, sq3);

    // BOTTOM SHAPE
    int botshap1[] = {500, 650, 540, 650, 500, 690, 410, 690, 435, 665, 485, 665, 500, 650};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(6, botshap1);

    // BOTTOM SHAPES
    int botshap2[] = {750, 655, 795, 700, 725, 700, 725, 655, 750, 655};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, botshap2);

    int botshap3[] = {newWidth - j - 750, 655, newWidth - j - 795, 700, newWidth - j - 725, 700, newWidth - j - 725, 655, newWidth - j - 750, 655};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, botshap3);

    // LINE EXTENSIONS RIGHT
    int lineright[] = {1250, 300, 1275, 325, 1275, 450, 1250, 475};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, lineright);

    // LINE EXTENSIONS TOP
    int linetop[] = {1125, 50, 1100, 25, 900, 25, 875, 50};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, linetop);

    // LINE EXTENSIONS LEFT
    int lineleft[] = {100, 700, 75, 675, 75, 500, 100, 475};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, lineleft);

    // INNER RECTANGLES TOP RIGHT
    int toprect1[] = {300, 60, 350, 60, 350, 65, 300, 65, 300, 60};
    int toprect2[] = {300 + shift, 60, 350 + shift, 60, 350 + shift, 65, 300 + shift, 65, 300 + shift, 60};
    int toprect3[] = {300 + 2 * shift, 60, 350 + 2 * shift, 60, 350 + 2 * shift, 65, 300 + 2 * shift, 65, 300 + 2 * shift, 60};
    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, toprect1);
    fillpoly(4, toprect2);
    fillpoly(4, toprect3);
}

void loading()
{
    int newWidth = 1370;
    int newHeight = 800;
    int ydiff = 100;
    int shift = 50;
    int nshift = 15;
    int yshift = 10;
    int i, j = 195;
    int ndiff = 60;
    int xshift = 60;
    int trans = 185;

    // CIRCLE
    setcolor(WHITE);
    for (i = 100; i < 104; i++)
    {
        circle(450, 350, i);
    }
    setcolor(WHITE);
    for (i = 79; i <= 81; i++)
    {
        circle(450, 350, i);
    }

    // ARCS
    setcolor(YELLOW);
    for (i = 85; i <= 95; i++)
    {
        arc(450, 350, 10, 110, i);
        arc(450, 350, 130, 230, i);
        arc(450, 350, 250, 350, i);
    }

    setcolor(YELLOW);
    for (i = 65; i <= 75; i++)
    {
        arc(450, 350, 66, 176, i);
        arc(450, 350, 186, 296, i);
        arc(450, 350, 306, 56, i);
    }

    // OUTER SHAPE
    setcolor(WHITE);
    line(shift + 465, 265, shift + 515, 265);
    line(shift + 515, 265, shift + 530, 280);
    line(shift + 530, 280, shift + 600, 280);
    line(shift + 600, 280, shift + 615, 265);
    line(shift + 615, 265, shift + 900, 265);
    line(shift + 900, 265, shift + 950, 315);
    line(shift + 950, 315, shift + 950, 425);
    line(shift + 950, 425, shift + 925, 450);
    line(shift + 925, 450, shift + 875, 450);
    line(shift + 875, 450, shift + 850, 475);
    line(shift + 850, 475, shift + 550, 475);
    line(shift + 550, 475, shift + 505, 430);
    line(shift + 505, 430, shift + 475, 430);

    // INNER LINE
    setcolor(WHITE);
    line(850, 275, 950, 275);
    line(950, 275, 975, 300);
    line(975, 300, 875, 300);
    line(875, 300, 850, 275);

    line(850, newHeight - j - 275, 950, newHeight - j - 275);
    line(950, newHeight - j - 275, 975, newHeight - j - 300);
    line(975, newHeight - j - 300, 875, newHeight - j - 300);
    line(875, newHeight - j - 300, 850, newHeight - j - 275);

    line(850 - xshift, newHeight - ndiff - 275, 950 - xshift, newHeight - ndiff - 275);
    line(950 - xshift, newHeight - ndiff - 275, 975 - xshift, newHeight - ndiff - 300);
    line(975 - xshift, newHeight - ndiff - 300, 875 - xshift, newHeight - ndiff - 300);
    line(875 - xshift, newHeight - ndiff - 300, 850 - xshift, newHeight - ndiff - 275);

    line(newWidth - 850 + trans, newHeight - ndiff - 275, newWidth - 950 + trans, newHeight - ndiff - 275);
    line(newWidth - 950 + trans, newHeight - ndiff - 275, newWidth - 975 + trans, newHeight - ndiff - 300);
    line(newWidth - 975 + trans, newHeight - ndiff - 300, newWidth - 875 + trans, newHeight - ndiff - 300);
    line(newWidth - 875 + trans, newHeight - ndiff - 300, newWidth - 850 + trans, newHeight - ndiff - 275);

    int inner1[] = {850, 275, 950, 275, 975, 300, 875, 300, 850, 275};
    int inner2[] = {850, newHeight - j - 275, 950, newHeight - j - 275, 975, newHeight - j - 300, 875, newHeight - j - 300, newHeight - j - 275};
    int inner3[] =
        {
            850 - xshift, newHeight - ndiff - 275, 950 - xshift, newHeight - ndiff - 275,
            975 - xshift, newHeight - ndiff - 300, 875 - xshift, newHeight - ndiff - 300,
            875 - xshift, newHeight - ndiff - 300, 850 - xshift, newHeight - ndiff - 275};
    int inner4[] =
        {
            newWidth - 850 + trans, newHeight - ndiff - 275, newWidth - 950 + trans, newHeight - ndiff - 275,
            newWidth - 975 + trans, newHeight - ndiff - 300, newWidth - 875 + trans, newHeight - ndiff - 300,
            newWidth - 850 + trans, newHeight - ndiff - 275};

    setfillstyle(SOLID_FILL, WHITE);
    fillpoly(4, inner1);
    fillpoly(4, inner2);
    fillpoly(4, inner3);
    fillpoly(4, inner4);

    // OUTER SHAPE EXTENSIONS
    setcolor(WHITE);
    line(800, 265, 815, 250);
    line(815, 250, 925, 250);
    line(925, 250, 940, 265);

    int outer1[] = {800, 265, 815, 250, 925, 250, 940, 265};
    setfillstyle(SOLID_FILL, YELLOW);
    fillpoly(4, outer1);

    // LOADING TEXT
    setcolor(YELLOW);
    settextstyle(BOLD_FONT, HORIZ_DIR, 5);
    outtextxy(580, 300, "LOADING...");

    // LOADING BAR + NUMBER
    setcolor(YELLOW);
    for (i = 0; i < 26; i++)
    {
        rectangle(580 + i * nshift, 350, 590 + i * nshift, 425);
    }
    char num[][26] = {"01", "05", "09", "13", "17", "21", "25", "29", "33", "37", "41", "45", "49", "53", "57", "61", "65", "69", "73", "77", "81", "85", "89", "93", "97", "100"};
    setfillstyle(SOLID_FILL, WHITE);
    for (i = 0; i < 26; i++)
    {
        int rect[] = {
            580 + i * nshift, 350,
            590 + i * nshift, 350,
            590 + i * nshift, 425,
            580 + i * nshift, 425};
        fillpoly(4, rect);
        setcolor(WHITE);
        settextstyle(BOLD_FONT, HORIZ_DIR, 6);
        if (i == 25)
        {
            outtextxy(405, 325, num[i]);
        }
        else
        {
            outtextxy(420, 325, num[i]);
        }
        delay(35);
    }
    delay(700);
}

void topic(char *sentence)
{
    cleardevice();
    theorybackground();
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    setcolor(YELLOW);
    outtextxy(300, 100, sentence);
}

void read_file(char *filename) 
{
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file!\n");
        return;
    }

    theorybackground();
    
    struct Question questions[MAX_QUESTIONS];
    int question_count = 0;

    while (fgets(questions[question_count].question, MAX_QUESTION_LENGTH, file) != NULL &&
           question_count < MAX_QUESTIONS) {
        for (int i = 0; i < MAX_OPTIONS; i++) {
            if (fgets(questions[question_count].options[i], MAX_QUESTION_LENGTH, file) == NULL) {
                printf("Error reading options for question %d\n", question_count + 1);
                return;
            }
        }

        if (fscanf(file, "Correct Option: %d\n", &questions[question_count].correct_option) != 1) {
            printf("Error reading correct option for question %d\n", question_count + 1);
            return;
        }

        questions[question_count].question[strcspn(questions[question_count].question, "\n")] = '\0';
        for (int i = 0; i < MAX_OPTIONS; i++) {
            questions[question_count].options[i][strcspn(questions[question_count].options[i], "\n")] = '\0';
        }

        question_count++;
    }

    fclose(file);
    
     int score = 0;
    for (int i = 0; i < question_count; i++) {
        setcolor(WHITE);
        settextstyle(BOLD_FONT, HORIZ_DIR, 2);
        outtextxy(150, 200, questions[i].question);
        
        int y = 250;
        for (int j = 0; j < MAX_OPTIONS; j++) {
            outtextxy(150, y, questions[i].options[j]);
            y = y + 30;
        }

        int chosen_option = 0;
        char answer;

        for (int remainingTime = 30; remainingTime >= 0; remainingTime--) {
            char countdown[3];
            countdown[0] = (remainingTime / 10) + '0';
            countdown[1] = (remainingTime % 10) + '0';
            countdown[2] = '\0';

            setcolor(YELLOW);
            outtextxy(1125, 110, countdown);
            delay(1000);

            if (kbhit()) {
                answer = getch();
                chosen_option = answer - '0';
                if (chosen_option >= 1 && chosen_option <= 4) {
                    break;
                }
            }
            if(remainingTime==0)
            {
            	newscreen();
            	goto finish;
			}
        }
        
        if (chosen_option == questions[i].correct_option) {
            outtextxy(150, 400, "Correct!");
            score++;
        } else {
            outtextxy(150, 400, "Incorrect!");
        }

        outtextxy(150, 450, "Press any key to continue...");
        getch();
        newscreen();
    }
	finish:
    setcolor(WHITE);
    settextstyle(BOLD_FONT, HORIZ_DIR, 2);
    char score_str[50];
    sprintf(score_str, "Final Score: %d", score);
    outtextxy(150, 200, score_str);
	feedback(score);
    outtextxy(150, 250, "Press any key to exit...");
    getch();

}

void newscreen()
{
setcolor(BLACK);
rectangle(127, 200, 1248, 500);
setfillstyle(SOLID_FILL, BLACK);
bar(127, 200, 1248, 500);
}

void chapter_1_theory()
{
    char sentence[] = {"Constant, Variables and Data types"};
    char para1[] =
        {
            "Keywords:\nWe must know some Keywords in order to go in Side This. So here we go:\nKeywords are predefined words for C programming language. All the key words have meaning\nand these meanings cannot be changed. Some keywords are: int, void, else, float, const, \nif, goto, while, return, struct, switch, char, case, and so on. We will understand those\nkeywords' meaning as per need in the whole process of learning with interaction."};
    char para2[] =
        {
            "Data Types: \nDifferent types of Data types are available which can be used according to our needs.\nData types have three classes and its inner sub-divisions. We will just learn at the\nsurface level and useful data types.\n1. Integer Type (int)\na) Integer are whole numbers. These types require 16 bits of Storage.\nb) This type has signed and unsigned type as per need; we use what is required.\nc) For example: It represents values from -2,147,483,648 to +2,147,483,647 and from 0 to \n4,294,967,295.\nd) Its conversion characters are d, u, ld, lu according to the requirement of condition."};
    char para3[] =
        {
            "2. Floating Point Types (float)\na) It reserves 4 bytes in memory.\nb) It represents fractional numbers of the range -1.2*10^-38 to +3.4*10^+38.\nc) Its conversion character is f.\nd) Variable is defined as: float a;"};
    char para4[] =
        {
            "3. Double Precision Floating Point Type (double)\na) To provide more accuracy than the float type, it is used.\nb) A double data type number uses 64 bits (8 bytes).\nc) Variable is defined as: double a;\nd) Its conversion constant is lf."};
    char para5[] =
        {
            "Constant: \nIt is a quantity that doesn't change during the execution. There are numerics, character \nconstants, and string constants.\nCharacter Constants:\na) It is a single character alphabet, digit, or a special symbol enclosed in single quota \nmarks.\nb) Maximum length is only one character.\nc) Examples: '2', 'a', 'D', '?' etc. *Case Alert! (4 and '4' are not the same)"};
    char para6[] =
        {
            "String Constant:\na) It is a sequence of characters enclosed in double quotes.\nb) It may contain letters, numbers, special characters, or blank spaces.\nc) Examples: \"Hello\", \"Hi\", \"A\", \"2008\" etc. *Case Alert! (The character constant 'A' \nand String constant \"A\" are not similar."};
    char para7[] =
        {
            "Variables:\na) It is a symbolic name used to store data items like numeric or character constants.\nb) It represents items of data input by the user and is used to identify them.\nc) It may have letters, digits, or underscore characters.\nd) Example: Nepal, first_name, email_addr, x2 etc."};
    char para8[] =
        {
            "Variable Declaration:\n a) In programming, variables must be defined before using them.\n b) Variables are declared or defined using their own syntax.\n c) Syntax of Variable Declaration: data-type variable_name1, variable_name_2,......, \n variable_name_n;\n d) It is needed to associate the variable with specific data. This means to declare or \n define data as what type it is, which helps the compiler to allocate memory space.\n e) For example, in the case of int, it will allocate 16 bits of Memory."};

    topic(sentence);
    displaypara(para1);
    getch();
    newscreen();
    displaypara(para2);
    getch();
    newscreen();
    displaypara(para3);
    getch();
    newscreen();
    displaypara(para4);
    getch();
    newscreen();
    displaypara(para5);
    getch();
    newscreen();
    displaypara(para6);
    getch();
    newscreen();
    displaypara(para7);
    getch();
    newscreen();
    displaypara(para8);
    getch();
    newscreen();
}

void chapter_2_theory()
{

    char sentence[] = {"Operators & Expressions and Input/Output Operations"};
    char para1[] =
        {
            "In C programming, operators are special symbols that help us do different things with\nnumbers and values. operators play a fundamental role in performing various operations\non variables and constants. These operators are symbols that allow us to carry out basic\narithmetic calculations, such as addition (+), subtraction (-), multiplication (*),\ndivision (/), and finding the remainder (%). Additionally, we have relational operators\nlike equality (==), inequality (!=), greater than (>), less than (<), greater than or\nequal to (>=), and less than or equal to (<=), which help us compare values and determine\ntrue or false outcomes. Logical operators, namely AND (&&), OR (||), and NOT (!), allow us\nto combine multiple conditions and evaluate expressions to check if certain conditions hold\ntrue or false."};
    char para2[] =
        {
            "Another category of operators is the bitwise operators, which perform operations at the\nbit-level of data. These operators include bitwise AND (&), bitwise OR (|), bitwise \nXOR (^),left shift (<<), and right shift (>>). They are used to manipulate individual \nbits within a number, often utilized in low-level programming and working with hardware \ninterfaces.Furthermore, we have assignment operators like the basic assignment operator\n(=), which allows us to assign values to variables. Additionally, there are compound\n assignment operators like +=, -=, *=, /=, and %=, which provide a shorthand way of \ncombining arithmetic operations with assignment."};
    char para3[] =
        {
            "Expressions in C programming are combinations of operators, variables, and constants that\nyield a single value. They are an essential part of writing complex calculations and\ndecision-making structures within a program. For instance, we can use expressions to\ncompute mathematical formulas or evaluate conditions based on user input or other data.\nExpressions can be as simple as a single variable or as complex as a combination of \nmultiple operators and variables."};
    char para4[] =
        {
            "On the other hand, input and output (I/O) operations are crucial for interacting with\nexternal devices like keyboards, screens, files, and other peripherals. In C programming,\nI/O operations are handled using the \"stdio.h\" header file, which provides functions and\nmacros to read and write data. The formatted input function, \"scanf()\", allows us to read\nformatted data from the standard input stream (stdin), while formatted output function,\n\"printf()\", displays formatted data on the standard output stream (stdout). Control strings\nare used with these functions to specify the data format, like %f for floating-point \nvalues,%c for characters, and %d for integers."};
    char para5[] =
        {
            "In summary, C programming operators and expressions are vital tools that enable us to\nperform various calculations, comparisons, and logical evaluations. Understanding how to\nuse these operators effectively is crucial for developing efficient and powerful C\nprograms. Moreover, input and output operations facilitate communication between the\nprogram and external devices, allowing for data input and output in a formatted manner.\nBy mastering these concepts, programmers can harness the full potential of the C\nprogramming language to build a wide range of applications and software solutions."};

    topic(sentence);
    displaypara(para1);
    getch();
    newscreen();
    displaypara(para2);
    getch();
    newscreen();
    displaypara(para3);
    getch();
    newscreen();
    displaypara(para4);
    getch();
    newscreen();
    displaypara(para5);
    getch();
}

void chapter_3_theory()
{
    char sentence[] = {"Control Statements in C"};
    char para1[]=
        {
            "Control statements in C programming are crucial for managing the flow of execution based \non specific conditions.The three main types of control statements are decision-making \nstatements, loop statements, and jump statements."
        };
    char para2[]=
        {
            "A) Decision-making statements: \n1 )if statement: \n It allows the program to execute a block of code if a specified condition is true.\n Otherwise, the block is skipped. \n It's syntax is: \n if(test_expression)\n  { statement -block; }"
        };
    char para3[]=
        {
            "2)if-else statement:\n It extends the if statement by providing an alternative block of code to\n execute if the condition is false. \n It's syntax is \n if(test_expression) \n { true-block statement ; } \n else { false-block statement ; }"
        };
    char para4[]=
        {
            "3) nested if...else statement: It allows multiple levels of conditions to be evaluated.\n It's syntax is\n if(condition1) { \n     if(condition2) { \n     statement; } \n     else{statement;}\nelse{statement;}"
        };
    char para5[]=
        {
            "B)Loop statements:\n\n1) while loop: It repeatedly executes a block of code as long as the specified condition \n is true. It's syntax is\n\n while(test_condition)\n {\n body of loop;\n }"
        };
    char para6[]=
        {
            "2)do-while loop: It is similar to the while loop, but it ensures the block of code \n executes at least once before checking the condition. It's syntax is\n\n do\n {\n body of loop;\n }\n while(test condition);"
        };
    char para7[]=
        {
            "3)for loop: It provides a more compact way to define and control the loop variables.\n It's syntax is\n\n for(counter_initialization; text_condition; increment or decrement)\n {\n body of loop ;\n }"
        };
    char para8[]=
        {
            "C) Jump Statements\n1) break statement: It is used to exit from a loop or switch statement prematurely.\n It's syntax is\n break;\n\n2) continue statement: It is used to skip the rest of the loop and start the next \n iteration. \n It's syntax is\n continue ;\n\n3) goto statement: It allows jumping to a labeled statement within the same function,\n but its use is generally discouraged due to its potential to create spaghetti code.\n It's syntax is\n goto label ;"
        };

    topic(sentence);
    displaypara(para1);
    getch();
    newscreen();
    displaypara(para2);
    getch();
    newscreen();
    displaypara(para3);
    getch();
    newscreen();
    displaypara(para4);
    getch();
    newscreen();
    displaypara(para5);
    getch();
    newscreen();
    displaypara(para6);
    getch();
    newscreen();
    displaypara(para7);
    getch();
    newscreen();
    displaypara(para8);
    getch();
}

void chapter_4_theory()
{
    char sentence[] = {"Functions in C"};

    char para1[] =
        {
            "In C programming, functions are blocks of code that perform a specific task and can be \ncalled from other parts of the program. Here's a basic theory of functions in C:\n a) Function Declaration: Before using a function in C, it needs to be declared. \n The declaration includes the function's return type, name, and parameters (if any).\n For examples:\n int add(int a, int b);"
        };
    char para2[] =
        {
            "b)Function Definition: \n The function definition provides the actual implementation of the function. \n It consists of a function header and a function body enclosed in curly \n braces.\n For example: int add(int a, int b) { int sum = a + b; return sum; }"
        };
    char para3[] =
        {
            "c) Function Call:\n To use a function, you call it by its name followed by parentheses containing the \n required arguments (if any). The function returns the specified data type.\n For example: int result = add(5, 3);"
        };
    char para4[] =
        {
            "d) Return Statement:\n The return statement is used to return a value from a function. It can be used only \n in functions with a non-void return type.\n For example: \n return sum;"
        };
    char para5[] =
        {
            "e) Void Functions:\n Functions with a return type of void do not return any value. They are used\n to perform actions without returning anything.\n For example:\n void greet() { printf(\"Hello, World!\"); }"
        };
    char para6[] =
        {
            "User-defined Functions\n A user-defined function is a block of code created by the programmer to perform a\n specific task or set of tasks. These functions provide a way to \n modularize the program and enhance code reusability, making it easier to manage and \n maintain complex projects.To create a user-defined function, one must first declare\n its prototype, which includes the function's name, return type, \n and any parameters it accepts.The function's implementation \n is then defined separately, containing the actual code to be executed \n when the function is called."
        };
    char para7[] =
        {
            "Function Prototypes\n In C, you can declare function prototypes at the beginning of the code \n to inform the compiler about the functions used in the program.\n It helps avoid errors related to undefined functions.\n For example: \n int add(int a, int b);\n void greet();"
        };
  
    topic(sentence);
    displaypara(para1);
    getch();
    newscreen();
    displaypara(para2);
    getch();
    newscreen();
    displaypara(para3);
    getch();
    newscreen();
    displaypara(para4);
    getch();
    newscreen();
    displaypara(para5);
    getch();
    newscreen();
    displaypara(para6);
    getch();
    newscreen();
    displaypara(para7);
    getch();
}

void chapter_5_theory()
{
		char sentence[]={"Array, Strings and Pointers"};
		
		char para1[] ={"In C programming, arrays, strings, and pointers are fundamental concepts used to \nhandle data efficiently. Let's towards each of them:"};
		
		char para2[] ={
            "Arrays\nAn array is a collection of elements of the same data type stored in contiguous\nmemory locations.The elements in an array can be accessed using their index, which starts\nfrom 0 to (array_size - 1).Arrays are declared with a fixed size at compile time. \nSyntax is :\ndata_type array_name[size];"
        };
		
        char para3[]={
            "Example: \nint numbers[5]; // Declaration of an integer array with size 5. \nnumbers[0] = 10; // Assigning value 10 to the first element of the array. \nint value = numbers[2]; // Accessing the third element of the array and storing it in \nthe 'value' variable."
        };
		
        char para4[]={
            "Strings \nIn C, strings are represented as arrays of characters, terminated by a null character '\O'. \nStrings are used to store sequences of characters, such as words or sentences. \nStrings can be initialized using double quotes, and individual characters can be \naccessed using array indexing. \nSyntax is: \nchar string_name[size]; or char string_name[ ] = \"text\";"
        };

        char para5[]={
            "Example: \nchar name[10] = \"John\"; // Declaration and initialization of a character array (string) \nwith size 10. \nprintf(\"Hello, %s!\\n\", name); // Printing the string using the 'printf' function."
        };

        char para6[]={
            "Pointers \nPointers are variables that store memory addresses of other variables. They are used for \ndynamic memory allocation and efficient memory access.The '&' operator is used to get the \nmemory address of a variable, and the '*' operator is used to declare a pointer and \ndereference it. \nSyntax is: \ndata_type *pointer_name;"
        };

        char para7[]={
           "Example: \nint num = 42; int *ptr = # // Declaration of an integer pointer and assigning the memory \naddress of 'num' to it printf(\"Value of num: %d\", *ptr); // Dereferencing the pointer to \nget the value stored in 'num'. \nConversion to Function Arrays and strings can be passed to functions as pointers, \nenabling functions to operate on the data without copying it. Pointers can be used to pass \nvariables by reference to functions, allowing functions to modify the original values."
        };

	topic(sentence);
    displaypara(para1);
    getch();
    newscreen();
    displaypara(para2);
    getch();
    newscreen();
    displaypara(para3);
    getch();
    newscreen();
    displaypara(para4);
    getch();
    newscreen();
    displaypara(para5);
    getch();
    newscreen();
    displaypara(para6);
    getch();
    newscreen();
    displaypara(para7);
    getch();	
}

void chapter_6_theory()
{
    char sentence[]={"Structure and Union"};

    char para1[]={
          "Structure \nIn C, a structure is a composite data type that groups together \nvariables of different data types under a single name. Each variable within \nthe structure is called a member. The members can have different data types, \nand they are stored in contiguous memory locations. Structures are defined \nusing the struct keyword. The syntax of a structure is as follows: \nstruct structure_name { data_type member_variables1; data_type member_variable2; \n............. ............. data_type member_variablen; };"
    };

    char para2[]={
        "A structure in C programming can be initialized using the following syntax: \nstruct structure_name structure_variable = {value1, value2,........,valuen}; \nHere's a simple example: \nstruct Student { char name[50]; int age; float GPA; }; \nIn this example, we've defined a structure named Student with three members: \nname, age, and GPA. \nSelf-referential structures can be used as follows: \nstruct List { int data; struct List *next; };"
    };

    char para3[]={
        "Here, List represents a set of items organized in sequence. \nAs we know, all portions of C are related to each other. Therefore, they can be \ninterconnected through various processes. For instance, a pointer can be converted to \na structure. This conversion can be achieved using the syntax: \nptr_variable.member_name;"
    };

    char para4[]={
       "Unions\nUnions are similar to structures, but they share the same memory location for all\ntheir members. Unlike structures, only one member of a union can have a value at a given\ntime, and accessing one member will overwrite the values of other members. Unions are also\ndefined using the union keyword. Here's a basic example as syntax: \nunion Data { int num;\nfloat value; char symbol; }; \nIn this case, the union Data has three members: num, value, \nand symbol. However, only one of them can contain a value at any given moment."
    };

    topic(sentence);
    displaypara(para1);
    getch();
    newscreen();
    displaypara(para2);
    getch();
    newscreen();
    displaypara(para3);
    getch();
    newscreen();
    displaypara(para4);
    getch();

}

void chapter_7_theory()
{
    char sentence[]={"File Handling Functions"};

    char para1[]={
        "Data files in C programming are used to store and retrieve data from external sources. They\nare essential for saving data between program executions and for exchanging data between\nprograms. In C, the Standard I/O library provides functions to work with data files.\nFile Modes\nC provides different file modes that determine how the file can be accessed. The main\nmodes are:\n\"r\": Read mode. Open file for reading.\n\"w\": Write mode. Create or truncate a file for writing.\n\"a\": Append mode. Open file for writing at the end, or create a new file if it \ndoesn't exist.\"rb\", \"wb\", \"ab\": Binary mode. Used with respective read, write, \nand append modes for binary files."
    };

    char para2[]={
        "File Handling Functions:\n1. fopen(): Opens a file and returns a file pointer. Syntax: FILE *fopen(const char \n*filename, const char *mode);\n2. fgetc(): Reads a character from a file. Syntax: int fgetc(FILE *stream);\n3. fputc(): Writes a character to a file. Syntax: int fputc(int char, FILE *stream);\n4. fgets(): Reads a line from a file. Syntax: char *fgets(char *str, int n, FILE *stream);\n5. fputs(): Writes a string to a file. Syntax: int fputs(const char *str, FILE *stream);"
    };

    char para3[]={
        "6. fprintf(): Writes formatted output to a file. Syntax: int fprintf(FILE *stream,\n const char *format, ...);\n7. fscanf(): Reads formatted input from a file. Syntax: int fscanf(FILE *stream,\n const char *format, ...);\n8. fread(): Reads binary data from a file. Syntax: size_t fread(void *ptr, size_t size,\n size_t count, FILE *stream);\n9. fwrite(): Writes binary data to a file. Syntax: size_t fwrite(const void *ptr,\n size_t size, size_t count, FILE *stream);"
    };

    char para4[]={
        "Opening a file in read mode:\nFILE *file = fopen(\"data.txt\", \"r\");\n  \nWriting to a file in append mode:\nFILE *file = fopen(\"data.txt\", \"a\");\nfprintf(file, \"New data\n\");\n\nReading binary data from a file:\nFILE *file = fopen(\"binary_data.bin\", \"rb\");\nfread(buffer, sizeof(buffer), 1, file);"
    };

    char para5[]={
        "Finally, data files are closed using fclose() which is the function for closing files.\nClosing Files\nFiles should always be closed after using them with fclose(). \nThe syntax of this function is:\nfclose(file);"
    };

    topic(sentence);
    displaypara(para1);
    getch();
    newscreen();
    displaypara(para2);
    getch();
    newscreen();
    displaypara(para3);
    getch();
    newscreen();
    displaypara(para4);
    getch();
    newscreen();
    displaypara(para5);
    getch();
}

void displaypara(char *paragraph)
{

    theorybackground();
    settextstyle(BOLD_FONT, HORIZ_DIR, 2);
    setcolor(WHITE);
    int x = 150;
    int y = 200;
    char *line = strtok(paragraph, "\n");
    while (line != NULL)
    {
        outtextxy(x, y, line);
        y += textheight(line) + 5;
        line = strtok(NULL, "\n");
    }
}

void questions()
{
	theorybackground();
	setcolor(WHITE);
	settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	outtextxy(450,200,"Questions");
	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
	outtextxy(200,300,"You will have 30 seconds to answer each question");
	setcolor(WHITE);
	outtextxy(450,350,"Press Enter to start");
	getch();
}

void feedback(int score)
{
	setcolor(YELLOW);
	settextstyle(BOLD_FONT, HORIZ_DIR, 4);
	int x=200;
	int y=300;
	switch(score)
	{
		case 0: outtextxy(x,y,"Theory seems to have gone on vacation.");
		break;
		
		case 1: outtextxy(x,y,"Review chapter's theory for stronger understanding.");
		break;
		
		case 2: outtextxy(x,y,"Study chapter material more thoroughly.");
		break;
		
		case 3: outtextxy(x,y,"Focus on chapter concepts to improve score.");
		break;
		
		case 4: outtextxy(x,y,"Solidify understanding with chapter review.");
		break;
		
		case 5: outtextxy(x,y,"Continue revisiting chapter for better grasp.");
		break;
		
		case 6: outtextxy(x,y,"Dive deeper into chapter's theory for improvement.");
		break;
		
		case 7: outtextxy(x,y,"Well done, refine knowledge for stronger grasp.");
		break;
		
		case 8: outtextxy(x,y,"Impressive! Explore related concepts for growth.");
		break;
		
		case 9: outtextxy(x,y,"Near mastery; explore advanced resources.");
		break;
		
		case 10: outtextxy(x,y,"Outstanding! Consider sharing insights with others.");
		break;
	}
	setcolor(WHITE);
    settextstyle(BOLD_FONT, HORIZ_DIR, 2);
}
