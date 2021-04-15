CC=pandoc
FLAGS_SLIDES=--pdf-engine=/Library/TeX/texbin/pdflatex --from markdown --to beamer --template "eisvogel.tex" --listings
FLAGS_BOOK=--pdf-engine=/Library/TeX/texbin/pdflatex --from markdown --template "eisvogel.tex" --listings
SRCS=$(wildcard *.md)
OBJS=$(SRCS:.md=.pdf)

all: $(OBJS)
		mkdir -p ../pdf
		mv *.pdf ../pdf

clean:
		rm -rf *.pdf

%.pdf: %.md
		$(CC) $< -o $@ $(FLAGS_SLIDES)
