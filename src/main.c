#include <curses.h>
#include <ncurses.h>

int main() {
	initscr();

	WINDOW *win = newwin(15, 17, 2, 10);

	refresh();

	box(win, 0, 0);

	mvwprintw(win, 0, 4, "<dir name>");

	wrefresh(win);

	getch();
	endwin();
	return 0;
}
