/* we cant have a circular definition, so the area gets declared, but not
 * defined. so the struct with its parent can exist. */


struct area;
struct room {
	area *myarea;
};
