#pragma once
#include <string>

class Builder
{
public:
    Builder() = default;
    ~Builder() = default;

    void addHeader(const std::string& text);
    void addParagraph(const std::string& text);

    const std::string& getContent() const;
};
