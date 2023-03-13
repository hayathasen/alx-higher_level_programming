#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    hay = my_list[:]
    if idx >= 0 and idx < len(hay):
        hay[idx] = element
    return hay
