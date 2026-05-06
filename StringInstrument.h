#ifndef STRINGINSTRUMENT_H
#define STRINGINSTRUMENT_H

class StringInstrument {
public:
    StringInstrument();
    ~StringInstrument();
    
    void playNote(int pitch);
    void setVolume(int volume);
    int getVolume() const { return volume; }
    
private:
    int volume;
    static const int DEFAULT_VOLUME = 80;
};

#endif // STRINGINSTRUMENT_H
