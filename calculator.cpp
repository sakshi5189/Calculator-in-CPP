#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <cstdlib>
#include <cstdio>

Fl_Input *num1;
Fl_Input *num2;
Fl_Input *result;

void add(Fl_Widget*, void*) {
    int a = atoi(num1->value());
    int b = atoi(num2->value());
    int sum = a + b;

    char res[20];
    sprintf(res,"%d",sum);
    result->value(res);
}

void sub(Fl_Widget*, void*) {
    int a = atoi(num1->value());
    int b = atoi(num2->value());
    int ans = a - b;

    char res[20];
    sprintf(res,"%d",ans);
    result->value(res);
}
void multi(Fl_Widget*,void*)
{
    int a = atoi(num1->value());
    int b = atoi(num2->value());
    int ans = a * b;

    char res[20];
    sprintf(res,"%d",ans);
    result->value(res);
}
void div(Fl_Widget*,void*)
{
    int a = atoi(num1->value());
    int b = atoi(num2->value());
    int ans = a / b;

    char res[20];
    sprintf(res,"%d",ans);
    result->value(res);
}
int main() {

    Fl_Window *win = new Fl_Window(500,200,"Simple Calculator");

    num1 = new Fl_Input(200,20,150,30,"Number 1:");
    num2 = new Fl_Input(200,60,150,30,"Number 2:");

    Fl_Button *addBtn = new Fl_Button(50,110,80,30,"Add");
    Fl_Button *subBtn = new Fl_Button(150,110,80,30,"Sub");
    Fl_Button *multiBtn = new Fl_Button(250,110,80,30,"Multi");
    Fl_Button *divBtn = new Fl_Button(350,110,80,30,"Div");

    result = new Fl_Input(200,150,150,30,"Result:");

    addBtn->callback(add);
    subBtn->callback(sub);
    multiBtn->callback(multi);
    divBtn->callback(div);

    win->end();
    win->show();

    return Fl::run();
}

