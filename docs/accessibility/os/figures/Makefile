# ---docerion
# type: script
# title: Makefile to render the architecture figure
# summary: Build script that regenerates architecture.png from architecture.gv using Graphviz dot, with all as the default target.
# relations:
#   - depends_on /docs/accessibility/os/figures/architecture.gv
# ---

all: \
	architecture.png

%.png: %.gv Makefile
	dot -Tpng $< -o $@
