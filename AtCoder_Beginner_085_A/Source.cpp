/*
問題文
2018 年 1 月某日、高木さんは書類を書いています。書類には、その日の日付を yyyy/mm/dd という形式で書き込む欄があります。例えば、2018 年 1 月 23 日は 2018/01/23 となります。
書類を書き終えたあと、高木さんは日付欄の先頭に誤って 2017 と書いてしまっていたことに気がつきました。高木さんが日付欄に書いた文字列 S を入力すると、S の先頭の 4 文字を 2018 に修正して出力するプログラムを書いてください。
*/

#include<iostream>
#include<string>

int main() {
	std::string str;

	std::cin >> str;

	std::cout << str.replace(3, 1, "8") << std::endl;

	return 0;
}