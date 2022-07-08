CC = gcc

CPPFLAGS += -I ./inc
LDFLAGS  += -L /usr/lib/x86_64-linux-gnu
LDFLAGS  += -lxml2

voicectl:voicectl.c common.c $(LIBS)
	$(CC) $^ -o $@ $(CPPFLAGS) $(LDFLAGS) -Wall

clean:
	rm voicectl
