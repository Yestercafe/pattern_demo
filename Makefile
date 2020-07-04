cc      := g++
ccflags := -std=c++11 -W{all,extra}
target  := Factory AbstractFactory Singleton Builder Prototype Bridge Adapter Decorator Composite\
           Flyweight Facade Proxy

out_dir := bin
target  := $(addprefix $(out_dir)/,$(target))

all: $(out_dir) $(target)

$(out_dir):
	mkdir $(out_dir)

$(out_dir)/%: ./%
	$(cc) $(addprefix $</,$(shell ls $< | grep "\.cc")) -o $@ $(ccflags)

.PHONY:
clean:
	rm -rf bin