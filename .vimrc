filetype on
set clipboard=unnamedplus
syntax on
inoremap jj  <Esc>
:set backspace=indent,eol,start
let mapleader = " "
nnoremap <Leader>so :source $MYVIMRC<CR>
filetype plugin on
set number
:set tabstop=4
:set shiftwidth=4
:set expandtab
call plug#begin('~/.vim/plugged')
Plug 'chriskempson/base16-vim'
Plug 'preservim/nerdcommenter'
Plug 'Yggdroot/indentLine'
Plug 'altercation/vim-colors-solarized'
Plug 'neoclide/coc.nvim', {'branch': 'release'}
call plug#end()
set termguicolors
let temp = getcwd()
colorscheme base16-solarized-light
let python_src='/home/vishwajit/dev/parser/runtest.py'
autocmd BufWritePre * %s/\s\+$//e
let file_path = getcwd()
autocmd BufNewFile *.cpp 0r /home/vishwajit/cp/template.cpp
autocmd filetype python nnoremap <F4>  :w <bar> exec '!python '.shellescape('%')<CR>
autocmd filetype cpp nnoremap <Leader>ss :w <bar> exec '!g++ '.shellescape('%').' -o '.shellescape('%:r').' && ./'.shellescape('%:r')<CR>
autocmd filetype cpp  nnoremap <Leader>sf :w <bar> exec '!python '.shellescape(python_src)file_path<CR>
