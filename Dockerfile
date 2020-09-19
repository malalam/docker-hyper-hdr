FROM ubuntu:xenial

RUN echo 'debconf debconf/frontend select Noninteractive' | debconf-set-selections

RUN apt-get update
RUN apt-get -y upgrade
RUN apt-get -y install curl wget dialog apt-utils libx11-6 libusb-1.0-0 libexpat1 libglu1-mesa libglib2.0-0 libfreetype6

RUN wget https://github.com/awawa-dev/HyperHDR/releases/download/v6.2.0.7A/Hyperion-6.2.0.7A-Linux-armv7l.deb
RUN apt-get install -y ./Hyperion-6.2.0.7A-Linux-armv7l.deb

RUN rm Hyperion-6.2.0.7A-Linux-armv7l.deb

EXPOSE 8090 19445 19444

RUN echo 'Running on port 8090'

CMD ["hyperiond"]
