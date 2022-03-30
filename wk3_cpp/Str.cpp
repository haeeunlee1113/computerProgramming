>
#include<iostream>
#include "Str.h"
using namespace std;

Str::Str (int leng) {
    //사이즈를 확인 음수일 땐 에러메시지 출력, 양수 일때는 해당 크기의 문자열 배열 할당
    if(leng < 0) {
        cout << "wrong range\n";
    }
    else
    {
       len = leng;
       str = new char[len];
    }
}

Str::Str (char * neyong) {
// string의 내용을 입력받음
    if(neyong == NULL) {
        //입력받은 내용이 없을 때
        cout << "null neyong";
    }
    else {
        len = strlen(neyong);
        str = new char[len];
        strcpy(str, neyong);
    }
}

Str::~Str () {
    // 소멸자 (할당 해제)
    delete[] str;
}

int Str::length (void) {
    // string의 길이를 리턴하는 함수
    return len;
}

char* Str::contents (void) {
    // string의 내용을 리턴하는 함수
    return str;
}

int Str::compare (class Str& a) {
    //a의 내용과 str을 compare -> class 로 전달받았기 때문에 클래스의 contents값을 가져와서 비교
    return strcmp(str, a.contents());
}

int Str::compare(char *a) {
    //a의 내용과 str을 compare -> 문자열로 전달받았기 때문에 문자열 그대로 비교
    return strcmp(str, a);
}

void Str::operator=(char * a) {
    // 문자열이 그대로 들어오는 경우 들어온 a 의 길이로 str의 크기를 설정하고 a의 값을 집어 넣는다.

        len = strlen(a);
        str = new char[len];
        strcpy(str, a);
}

void Str::operator=(class Str& a) {
    //문자열이 Str 클래스로 들어오는 경우 문자열의 길이와 내용을 읽어 str의 크기를 결정하고 값을 집어 넣는다.
    len = a.length();
    str = new char[len];
    strcpy(str, a.contents());
}