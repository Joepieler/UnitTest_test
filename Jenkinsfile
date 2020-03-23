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
                sh'cd /var/lib/jenkins/workspace/Test && ./test.exe > tee out.txt'
				
				recordIssues sourceCodeEncoding: 'UTF-16LE',
				tools: [groovyScript(id: 'catch2',
                                     name: 'Catch2',
                                     parserId: 'catch2',
                                     pattern: 'out.txt',
                                     reportEncoding: 'UTF-16LE')]
            }
        }
    }
}