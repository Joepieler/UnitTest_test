pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
				 sh 'cd /var/lib/jenkins/workspace/Test && g++ -std=c++14 -o test.exe main.cpp'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
                sh'cd /var/lib/jenkins/workspace/Test && ./test.exe'
            }
        }
    }
}