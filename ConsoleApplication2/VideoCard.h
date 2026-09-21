#pragma once
class VideoCard 
{
private:
    char* model; 
    int memory;
public:
    VideoCard(const char* mod, int mem);
    ~VideoCard();

    const char* getModel() const;
    int getMemory() const;
};
