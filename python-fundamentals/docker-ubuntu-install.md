# Installing Docker on Ubuntu EC2 Instance

Follow these steps to install Docker on your Ubuntu EC2 instance.

## 1. Update System Packages and Install Prerequisites

```bash
# Update existing packages
sudo apt-get update

# Install required packages
sudo apt-get install -y \
    apt-transport-https \
    ca-certificates \
    curl \
    software-properties-common \
    gnupg
```

## 2. Add Docker's Official GPG Key and Repository

```bash
# Add Docker's official GPG key
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg

# Add Docker repository
echo \
  "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu \
  $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null

# Update package list again
sudo apt-get update
```

## 3. Install Docker Engine

```bash
# Install Docker Engine and related packages
sudo apt-get install -y docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
```

## 4. Post-Installation Steps

```bash
# Start Docker service
sudo systemctl start docker

# Enable Docker to start on boot
sudo systemctl enable docker

# Add your user to the docker group (optional, for running Docker without sudo)
sudo usermod -aG docker $USER

# Apply group changes (you'll need to log out and back in for this to take effect)
newgrp docker
```

## 5. Verify Installation

```bash
# Check Docker version
docker --version

# Verify Docker is running properly by running a test container
docker run hello-world
```

## Important Notes

1. Make sure your EC2 security group allows necessary inbound traffic for your Docker containers.
2. If you added your user to the docker group, you'll need to log out and back in for the changes to take effect.
3. For production environments, consider additional security measures and Docker configuration options.

## Troubleshooting

If you encounter any issues:

1. Check Docker service status:
```bash
sudo systemctl status docker
```

2. Check Docker logs:
```bash
sudo journalctl -fu docker
```

3. If you can't connect to Docker daemon:
```bash
# Restart Docker service
sudo systemctl restart docker
```