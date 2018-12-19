#include "components/animated_border_box.h"

animated_border_box	*animated_border_box_create(vector2d size,
	int border_len_percent, int speed)
{
	animated_border_box *box;

	if ((box = malloc(sizeof(animated_border_box))) == NULL)
		return (NULL);
	box->size = size;
	box->speed = speed;
	if (border_len_percent > 100)
		border_len_percent = 100;
	else if (border_len_percent < 0)
		border_len_percent = 0;

	box->_total_char_count = size.x * 2 + size.y * 2 - 4;
	box->_border_char_count = (box->_total_char_count * border_len_percent) / 100;
	box->_time = 0;
	box->_current_char = 0;
	box->theme[0] = "#";
	box->theme[1] = "#";
	box->theme[2] = "#";
	box->theme[3] = "#";

	return (box);
}

void				animated_border_box_refresh(animated_border_box *box)
{
	int i;
	int i_char;

	box->_time += get_delta_time();
	if (box->_time >= box->speed * 1000)
	{
		box->_current_char += box->_time / (box->speed * 1000);
		box->_time = 0;
		if (box->_current_char >= box->_total_char_count)
			box->_current_char = 0;
	}

	//mvprintw(0, 0, "Delta time : %d\nTime : %d\nCurrent char : %d\nTotal char : %d\nLength : %d", get_delta_time(), box->_time, box->_current_char, box->_total_char_count, box->_border_char_count);

	i = 0;
	i_char = 0;
	while (i < box->size.x - 1)
	{
		if (box->_current_char - box->_border_char_count + 1 >= 0)
		{
			if (i_char >= box->_current_char - box->_border_char_count + 1 &&
		    	i_char <= box->_current_char)
				mvprintw(box->position.y, box->position.x + i, box->theme[0]);
		}
		else if (box->_current_char - box->_border_char_count + 1 < 0)
		{
			if (i_char - box->_total_char_count >= box->_current_char - box->_border_char_count + 1 &&
				i_char - box->_total_char_count <= box->_current_char)
				mvprintw(box->position.y, box->position.x + i, box->theme[0]);
			else if (i_char >= box->_current_char - box->_border_char_count + 1 &&
			    i_char <= box->_current_char)
				mvprintw(box->position.y, box->position.x + i, box->theme[0]);
		}
		i++;
		i_char++;
	}
	i = 0;
	while (i < box->size.y - 1)
	{
		if (box->_current_char - box->_border_char_count + 1 >= 0)
		{
			if (i_char >= box->_current_char - box->_border_char_count + 1 &&
		    	i_char <= box->_current_char)
				mvprintw(box->position.y + i, box->position.x + box->size.x - 1, box->theme[1]);
		}
		else if (box->_current_char - box->_border_char_count + 1 < 0)
		{
			if (i_char - box->_total_char_count >= box->_current_char - box->_border_char_count + 1 &&
				i_char - box->_total_char_count <= box->_current_char)
				mvprintw(box->position.y + i, box->position.x + box->size.x - 1, box->theme[1]);
			if (i_char >= box->_current_char - box->_border_char_count + 1 &&
			    i_char <= box->_current_char)
				mvprintw(box->position.y + i, box->position.x + box->size.x - 1, box->theme[1]);
		}

		i++;
		i_char++;
	}
	i = box->size.x - 1;
	while (i > 0)
	{
		if (box->_current_char - box->_border_char_count + 1 >= 0)
		{
			if (i_char >= box->_current_char - box->_border_char_count + 1 &&
		    	i_char <= box->_current_char)
				mvprintw(box->position.y + box->size.y - 1, box->position.x + i, box->theme[2]);
		}
		else if (box->_current_char - box->_border_char_count + 1 < 0)
		{
			if (i_char - box->_total_char_count >= box->_current_char - box->_border_char_count + 1 &&
				i_char - box->_total_char_count <= box->_current_char)
				mvprintw(box->position.y + box->size.y - 1, box->position.x + i, box->theme[2]);
			if (i_char >= box->_current_char - box->_border_char_count + 1 &&
			    i_char <= box->_current_char)
				mvprintw(box->position.y + box->size.y - 1, box->position.x + i, box->theme[2]);
		}
		i--;
		i_char++;
	}
	i = box->size.y - 1;
	while (i > 0)
	{
		if (box->_current_char - box->_border_char_count + 1 >= 0)
		{
			if (i_char >= box->_current_char - box->_border_char_count + 1 &&
		    	i_char <= box->_current_char)
				mvprintw(box->position.y + i, box->position.x, box->theme[3]);
		}
		else if (box->_current_char - box->_border_char_count + 1 < 0)
		{
			if (i_char - box->_total_char_count >= box->_current_char - box->_border_char_count + 1 &&
				i_char - box->_total_char_count <= box->_current_char)
				mvprintw(box->position.y + i, box->position.x, box->theme[3]);
			if (i_char >= box->_current_char - box->_border_char_count + 1 &&
			    i_char <= box->_current_char)
				mvprintw(box->position.y + i, box->position.x, box->theme[3]);
		}
		i--;
		i_char++;
	}
}
