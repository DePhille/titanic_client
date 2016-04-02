#pragma once

#include <string>

namespace Poco {
class Path;
}

namespace titanic {
namespace scanner {

class FileInfo
{
public:
	FileInfo(const Poco::Path& path);
	virtual ~FileInfo();

	const unsigned long getSize() const;

	void setSize(const unsigned long size);

	const std::string& getPath() const;

	void setPath(const std::string& path);

	const std::string& getHash() const;

	void setHash(const std::string& hash);

private:
	unsigned long _size;
	std::string _path;
	std::string _hash;
};

}
}