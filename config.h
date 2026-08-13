/* user and group to drop privileges to */
static const char *user = "necraul"; /* replace nobody with your username */
static const char *group = "nobody"; /* don't touch this */

static const char *colorname[NUMCOLS] = {
    [BG] = "#000000",     /* background */
    [INIT] = "#FAE8DF",   /* after initialization */
    [INPUT] = "#FAE8DF",  /* during input */
    [FAILED] = "#4C304F", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*
 * Shapes:
 * 0: square
 * 1: circle
 */
static const int shape = 0;
/* size of square in px */
static const int shapesize = 35;
static const int shapegap = 15;

/* Background image path, should be available to the user above */
/* The path should be absolute like /home/username/Pictures/Wallpapers/Wallpaper.jpg */
static const char *background_image = "/home/necraul/Pictures/Wallpapers/Kuroneko/Kuroneko_23.png";
