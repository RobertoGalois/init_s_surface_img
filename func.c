struct  s_surface*  init_s_surface_img(struct s_window* p_window, char* p_img, unsigned int p_x, unsigned int p_y)
{
        struct s_surface*   ret_s_surface;

        /* creation de la structure */
        ret_s_surface = malloc(sizeof(struct s_surface));

        /* initialisation de la surface sdl de la struct */
        ret_s_surface->sdl_surf = SDL_LoadBMP(p_img);

        /* definition des coordonnees */
        (*ret_s_surface).coord.x = p_x;
        (*ret_s_surface).coord.y = p_y;

        /* append */
        SDL_BlitSurface(ret_s_surface->sdl_surf, NULL, p_window->sdl_win,
                        &(ret_s_surface->coord));


}
