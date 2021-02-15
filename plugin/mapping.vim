inoremap jj <Esc>
" following map moves line below.
" noremap dont allow recursive mapping while map allows recursive mapping
noremap - ddp
noremap _ ddkP
" delete current line in insert mode and put back in insert mode
:inoremap <c-d> <Esc>ddi
" convert the current word in uppercase and put back in insert mode
:inoremap <c-u> <Esc>viwUi




tnoremap <Esc> <C-\><C-n>:q!<CR>






